#include <iostream>
using namespace std;

struct AAA{
    string name;
    int num1;
    int num2;
};

void print_aaa(AAA& aaa){
    std::cout << "###########" << std::endl;
    std::cout << "&aaa:"<< &aaa << std::endl;
    std::cout << "&aaa.name:"<< &aaa.name << std::endl;
    std::cout << "&aaa.num1:"<< &aaa.num1 << std::endl;
    std::cout << "&aaa.num2:"<< &aaa.num2 << std::endl;
    unsigned char* p = (unsigned char*)&aaa;
    for(size_t i = 0; i < sizeof aaa; ++i){
        printf("%p: %d\t:%c\n", p, *p, *p);
        p++;
    }
}

int main()
{
    std::cout << "Test Point1" << std::endl;
	AAA aaa;
	aaa.name = "My Name";
	aaa.num1 = 10;
    aaa.num2 = 20;

    printf("%lu\n", sizeof aaa);

    print_aaa(aaa);
    //aaa.name = "Your name";
    print_aaa(aaa);

    //aaa.name = "arsnteiaorsnteiaorsnteiaorsnteaiorsnteaiornsetoi";
    //print_aaa(aaa);

	FILE * fp = fopen("data1.bin", "wb");
    fwrite(&aaa, sizeof(aaa), 1, fp);

    fclose(fp);

	std::cout << "Test Point2" << std::endl;

	AAA aaa2;

	FILE * fp2 = fopen("data1.bin", "rb");

    fread(&aaa2, sizeof(aaa2), 1, fp2);
    std::cout << aaa2.name << std::endl;

    //fclose(fp2);

	return 0;
}
