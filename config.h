#ifndef __CONFIG_H__
#define __CONFIG_H__

#define LOAD_ADDRESS 0x98000000

#define MEMORY_MB 248

#define DATA_PATH "ux0:data/gtasa"
#define SO_PATH DATA_PATH "/" "libGTASA.so"
#define SHADER_CACHE_PATH  DATA_PATH "/" "cache"
#define CONFIG_PATH  DATA_PATH "/" "config.txt"

#define SCREEN_W 960
#define SCREEN_H 544

typedef struct {
  int touch_x_margin;
  int fix_skin_weights;
  int fix_map_bottleneck;
  int enable_shader_cache;
  int enable_skygfx;
  int disable_detail_textures;
  int disable_ped_spec;
  int disable_tex_bias;
  int disable_alpha_testing;
} Config;

extern Config config;

int read_config(const char *file);

#endif
