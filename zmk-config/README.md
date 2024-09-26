### putting glove80 into bootloader
* connect right half to computer with cable
* turn off
* press and hold pgdn + C while turning on.
* run `west flash` in the zephyr project directory
* repeat for left half with magic + E
### 
```bash
source ~/zephyrproject/.venv/bin/activate
west build --pristine -b "glove80_lh" -- -DZMK_CONFIG="/home/lys/projects/kbs.me/zmk-config/config"
```
