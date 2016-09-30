# Shell manual!
#### If you want to save the current working directory and use it later:
```sh
$ pwd > ~/remember.pwd
$ cd `cat ~/remember.pwd`
or
$ cd $(cat ~/remember.pwd)

