// #include<io.h> // not found on mac

/*
#ifdef __APPLE__
    #include<sys/uio.h>
#else
    #include<sys/io.h>
#endif
*/

#include<unistd.h>
#include<cstdio>

class  redirect
{
    FILE*   fp;
    int     fd;
    fpos_t  pos;

public:
    redirect( const char* filename, const char* mode = "wb", FILE* as = stdout )
    {
        fgetpos( as, &pos );
        //fd = _dup( fileno( as ) ); // windows
        fd = dup( fileno( as ) );
        fp = freopen( filename, mode, as );
    }
    ~redirect()
    {
        fflush( fp );
        //_dup2( fd, fileno( fp ) ); // windows
        dup2( fd, fileno( fp ) );
        close( fd );
        clearerr( fp );
        fsetpos( fp, &pos );
    }
};


