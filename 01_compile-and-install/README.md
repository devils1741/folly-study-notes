# 下载代码
建议下载2025年9月左右的版本
```bash
git clone git@github.com:facebook/folly.git
```

# 编译代码
假设clone之后的目录是这样的：/path/to/home/folly

cd /path/to/home/folly

python3 ./build/fbcode_builder/getdeps.py --allow-system-packages build --num-jobs 8 --install-prefix /usr/local

allow-system-packages：允许使用系统已经安装的第三方库
num-jobs： 编译时的线程数量(但是实际感觉并没有明显加快编译速度)
install-prefix：编译完成后的安装目录

还有一些其它选项可以在getdeps.py里查看
