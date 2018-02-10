#include <cstring>
#include <iostream>
#include <memory>
#include <string.h>

class Program;

using ProgramPtr = std::unique_ptr<Program>;

class Program
{
public:
    Program(int argc, char** argv) : m_argc(argc), m_argv(argv)
    {
        // Do nothing
    }

    void Run()
    {
        if (m_argc > 1)
        {
            PrepareInputBuffer();
        }
        else
        {
            for (;;)
            {
                ReceiveInput();
                ModifyOutputBuffer();
                puts("");
            }
        }
    }

    void PrepareInputBuffer()
    {
        int wcnt = 0;
        int lpcnt = 1;

        while (lpcnt < m_argc)
        {
            //strcpy_s(m_ibuf + wcnt, strlen(m_argv[lpcnt]), m_argv[lpcnt]);
            strcpy(m_ibuf + wcnt, m_argv[lpcnt]);
            wcnt += strlen(m_argv[lpcnt]);
            ++lpcnt;
        }
    }

    void ModifyOutputBuffer()
    {
        int lpcnt = 0;

        while (lpcnt < m_wcnt)
        {
            m_obuf[20] = m_ibuf[lpcnt];
            std::cout << m_obuf << ' ';
            ++lpcnt;
        }
    }

    void ReceiveInput()
    {
        std::cout << '>';
        std::cin.getline(m_ibuf, 31);
        CheckQuit();
        m_wcnt = strlen(m_ibuf);
    }

    void CheckQuit() const
    {
        if (!strcmp(m_ibuf, "/q"))
        {
            std::cout << "Program ends\n";
            exit(0);
        }
    }

private:
    int m_argc;
    char** m_argv;

    int m_wcnt = 0;
    char m_ibuf[31] = { 0 };
    char m_obuf[23] = ":regional_indicator_?:";
};


auto main(int argc, char** argv) -> int
{
    Program(argc, argv).Run();
}

// non windows : use this
//strcpy(m_ibuf + wcnt, m_argv[lpcnt]);
