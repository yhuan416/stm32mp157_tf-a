# install
``` sh
sudo apt-get update
sudo apt-get install lsb-core lib32stdc++6
sudo apt-get install device-tree-compiler
```

# build
``` sh
cd tf-a-stm32mp-2.2.r1/
make -f ../Makefile.sdk -j8 all
```
