brew install sshfs
no need -> adduser <username> fuse ??? 

mkdir ~/sshfs_practice
mkdir ~/sshfs_practice/mymnt
sshfs -o idmap=user <username>@<ipaddress>:/remotepath ~/remoteserv

e.g.
cd ~/sshfs_practice/mymnt
sshfs -o idmap=usr dkim87@linux.cs.mcgill.ca: .

# unmount
umount ~/sshfs_practice/mymnt
* unmount will fail if you try unmount inside the mounted directory.

# force unmount
```
pgrep -lf sshfs
kill -9 <pid>
umount -f <dir>
sudo umount -f <dir> # if not work
```
