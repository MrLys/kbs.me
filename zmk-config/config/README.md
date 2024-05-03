# How to make this work.

```bash
west build --pristine -b "glove80_lh" -- -DZMK_CONFIG="/home/lys/projects/zmk-config/config"
# then set the left half into bootloader mode (?)
west flash
# repeat for the right half.
```
