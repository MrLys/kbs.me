#  QMK Firmware for Wilba Tech WT65-G (Actually it's a WT65-h4)
## USAGE
### QMK Keyboards
1. Clone the QMK qmk_firmware repository
```
git clone https://github.com/qmk/qmk_firmware.git
```
2. Link the keyboard keymap to the qmk_firmware
```
ln -s $HOME/project/kbs.me/keyboards/wt65_h4/mrlys $HOME/project/qmk_firmware/keyboards/wilba_tech/wt65_h4/keymaps/mrlys
qmk flash -kb wilba_tech/wt65_h4 -km mrlys
```
