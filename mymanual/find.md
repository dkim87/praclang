# Use find

Let us say, you would like to find files which contains 'blah' in their names. 
    $ find {directory} -name '*blah*'
*If 'blah', then the file named exactly blah will be found.*

If you want to exclude .git, 
    $ find {directory} -type f -not -path "*.git*"


