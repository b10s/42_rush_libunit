#プロジェクト名 🚀
  Libft(42 common_core)

## 📌 概要
このプロジェクトでは、C言語で標準ライブラリの一部を独自に実装し、再利用可能なライブラリとして
管理する libft を作成します。42のカリキュラムで使用するため、関数の挙動を深く理解することが目的です。

42の課題を解いてゆく上で必要になった関数もここに格納してあります。（qsort関数など）。

標準ライブラリ関数だけでなく、双方向リストの実装 も含まれています。

以下が、このプロジェクト内のディレクトリの説明です。

memory      ... mem系関数を格納しています
monolist    ... 単方向リストに使用する関数を格納しています
put         ... put系関数（文字出力関数系）を格納しています
str         ... str系関数を格納しています。
twinlist    ... 双方向リストに使用する関数を格納しています
util        ... 上記に含まれない関数を格納しています。 

Makefileに関しては、
make all (bonus以外のすべての.cファイルをコンパイル)
make re (すべての.oファイルと.aファイルを消去して、make allをコンパイル)
make clean
make fclean
make bonus
を実装しています。
## 🔧 使用技術
- 言語: C
- ビルドツール: Makefile(コンパイルを自動化)
-バージョン管理:GitHub
## 🚀 インストール & 実行方法
1. リポジトリをクローン  
 git clone [[https://github.com/Hen00af/your-repo.git](https://github.com/Hen00af/libft.git](https://github.com/Hen00af/libft.git))
2. クローンしたリポジトリに移動.
  cd libft
3. makefileを実行.
  make bonus

