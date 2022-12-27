# Kocaeli42
Kocaeli 42 MAC bilgisayarları için modüller

Kurmak için `TEOMAN` klasörünü direkt olarak `~/` diznine atın.

Klasör `~/TEOMAN/` olarak bulunmalı.

Ardından konsola: `open ~/.zshrc` yazarak başlangıç shell komutlarını not defterinden açın.

İstediğiniz `alias` komutlarını buradan ekleyebilirsiniz:

Komutlar: `tree` `ll` `img` `c` `chat` `radyo`

```sh
alias tree="find . -print | sed -e 's; ;\.;g;s;[^/]*\/;│──;g;s;──│;  │;g'"
alias ll='ls -allG'
alias img='bash ~/TEOMAN/imgcat.sh $1'
alias c="~/TEOMAN/vimpager/vimcat $*"
alias chat="bash ~/TEOMAN/42CHAT/CHAT.sh $*"
alias radyo="bash ~/TEOMAN/42CHAT/RADIO.sh"
```

Bu komutları `.zshrc` dosanıza ekleyin ve kaydedin.

`tree`: Dosyaları, klasörleri ve klasörlerin içindeki objeleri listeler

<IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1055431566123356210/1.png">

`ll`: Daha detaylı LS komutu

<IMG src="https://cdn.discordapp.com/attachments/630843149778157623/1055433491409555526/2.png">

`img`: Terminale resim dosyası eklemenizi sağlar

<IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1055433509440852018/3.png">

`c`: Renkli bir şekilde terminale CAT yapar

<IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1055433684599181382/4.png">

`chat`: Radyodan birilerine bir şey yazın

`-i` ile resim dosyası gönderebilirsiniz

<IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1055433825271943188/5.png">

`radyo`: Radyodan gelen şeyleri görün (Sonsuz loop)

<IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1055465692771659867/6.png">
