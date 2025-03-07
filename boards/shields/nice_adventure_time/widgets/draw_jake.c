#include <stdlib.h>
#include <zephyr/kernel.h>
#include "draw_jake.h"

LV_IMG_DECLARE(jake);
// LV_IMG_DECLARE(nervous_jake);

void draw_jake(lv_obj_t *canvas) {
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &jake);

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}
