# T-Union Master

🐬🚇💳 交通卡大师

## 📖Description

T-Union Master（交通卡大师）是基于 [flipper zero](https://flipperzero.one/) 平台用以查询[交通联合卡](https://zh.wikipedia.org/wiki/%E4%BA%A4%E9%80%9A%E8%81%94%E5%90%88)综合信息的工具。

查询内容包括卡号、卡名、卡种、到期日期、余额等基础信息，充值、交易记录（10 条），交通工具、线路、站台等行程信息（30 条），查询方式为离线查询，无需蓝牙 wifi 等。

本应用使用 flipper zero 设备内建 NFC 外设及系统固件提供的 ISO/IEC 14443 (Type 4A) 协议栈与卡片通讯，应用层协议参考 EMV 标准以及交通运输部 JT/T 978 标准。

参考：[卡片协议分析记录](docs/card_data_format.md)

内置 GB2312 12px 不等宽汉字库，无需中文固件，应用内信息及站台名为中文显示；内置交通线路及站台数据库，支持情况如下。

[支持的城市及线路](docs/supported_cities.md)

## 💻Usage

### 主菜单界面

![](docs/assets/menu.png)

### 卡片基础信息

显示余额、卡号、卡名信息

导航键左：转到交易记录查询

导航键右：转到详细信息查询

![](docs/assets/baseinfo.png)

### 卡片详细信息

显示签发、到期日期，发卡地、卡种信息

导航键左：返回卡片基础信息

![](docs/assets/detailinfo.png)

### 交易记录

展示 10 条交易信息，按照从最近到最早排序，包含交易类型、交易金额、交易序号、时间（月日时分）信息。

导航键上下：滚动记录列表

导航键左：转到行程记录查询

导航键右：返回卡片基础信息

![](docs/assets/transactions.png)

### 行程记录

展示 30 条行程信息，按照从最近到最早排序，包含站台名、时间（月日时分）信息。

导航键上下：滚动记录列表

导航键右：转到交易记录查询

![](docs/assets/travels.png)

## 🔨 Building

克隆本项目，并使用 [ufbt](https://github.com/flipperdevices/flipperzero-ufbt) 进行编译（项目基于[mntm-008](https://github.com/Next-Flip/Momentum-Firmware/releases/tag/mntm-008) SDK 开发，需手动指定 SDK 版本）。

通过 qFlipper 或 `ufbt launch` 上传至 flipper zero

## 🚩TDL

- 行程记录详情界面
- 行程记录列表近出站图标
- 交易记录详情界面
- 行程记录列表文字滚动显示
- 开屏欢迎画面
- 北京卡优惠信息
- 公交线路解析
- 读取日志功能

## 📝Changelogs

v0.1: 上传 github 项目

## ⚠️Disclaimers

- 本项目以 GPL-3.0 License 作为开源协议，这意味着你需要遵守相应的规则
- 本项目仅适用于学习研究，任何人不得以此用于盈利
- 使用本项目造成的任何后果与本人无关

## 🎉Thakns

以下项目为本项目提供了部分技术参考和灵感，在此鸣谢。

- [Trip Reader 读卡识途](https://www.domosekai.com/reader/index.html)
- [NFSee](https://github.com/nfcim/nfsee)
