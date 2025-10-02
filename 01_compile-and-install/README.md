## 下载&编译
建议下载2025年9月左右的版本。另外很多库下载很慢，如果是在虚拟机里进行的安装那么可以考虑开启代理软件的TUN模式。

开启之后在虚拟机里`ping www.google.com`看看是否有数据，有的话说明生效了。

编译时间极其漫长，需要耐心等待。

```bash
git clone git@github.com:facebook/folly.git
cd folly
python3 ./build/fbcode_builder/getdeps.py --allow-system-packages build --num-jobs 8 --install-prefix /usr/local
```
### 选项说明
1. allow-system-packages:允许使用系统已经安装的第三方库
2. num-jobs:编译时的线程数量(但是实际感觉并没有明显加快编译速度)
3. install-prefix:编译完成后的安装目录

还有一些其它选项可以在[getdeps.py](https://github.com/facebook/folly/blob/main/build/fbcode_builder/getdeps.py)里查看函数parse_args

