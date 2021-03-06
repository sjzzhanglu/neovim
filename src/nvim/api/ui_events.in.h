#ifndef NVIM_API_UI_EVENTS_IN_H
#define NVIM_API_UI_EVENTS_IN_H

// This file is not compiled, just parsed for definitons
#ifdef INCLUDE_GENERATED_DECLARATIONS
# error "don't include this file, include nvim/ui.h"
#endif

#include "nvim/api/private/defs.h"
#include "nvim/func_attr.h"
#include "nvim/ui.h"

void mode_info_set(Boolean enabled, Array cursor_styles)
  FUNC_API_SINCE(3);
void update_menu(void)
  FUNC_API_SINCE(3);
void busy_start(void)
  FUNC_API_SINCE(3);
void busy_stop(void)
  FUNC_API_SINCE(3);
void mouse_on(void)
  FUNC_API_SINCE(3);
void mouse_off(void)
  FUNC_API_SINCE(3);
void mode_change(String mode, Integer mode_idx)
  FUNC_API_SINCE(3);
void bell(void)
  FUNC_API_SINCE(3);
void visual_bell(void)
  FUNC_API_SINCE(3);
void flush(void)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_IMPL;
void suspend(void)
  FUNC_API_SINCE(3) FUNC_API_BRIDGE_IMPL;
void set_title(String title)
  FUNC_API_SINCE(3);
void set_icon(String icon)
  FUNC_API_SINCE(3);
void option_set(String name, Object value)
  FUNC_API_SINCE(4) FUNC_API_BRIDGE_IMPL;

// First revison of the grid protocol, used by default
void update_fg(Integer fg)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void update_bg(Integer bg)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void update_sp(Integer sp)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void resize(Integer width, Integer height)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void clear(void)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void eol_clear(void)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void cursor_goto(Integer row, Integer col)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void highlight_set(HlAttrs attrs)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY FUNC_API_REMOTE_IMPL;
void put(String str)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void set_scroll_region(Integer top, Integer bot, Integer left, Integer right)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void scroll(Integer count)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;

// Second revison of the grid protocol, used with ext_linegrid ui option
void default_colors_set(Integer rgb_fg, Integer rgb_bg, Integer rgb_sp,
                        Integer cterm_fg, Integer cterm_bg)
  FUNC_API_SINCE(4) FUNC_API_REMOTE_IMPL;
void hl_attr_define(Integer id, HlAttrs rgb_attrs, HlAttrs cterm_attrs,
                    Array info)
  FUNC_API_SINCE(5) FUNC_API_REMOTE_IMPL FUNC_API_BRIDGE_IMPL;
void grid_resize(Integer grid, Integer width, Integer height)
  FUNC_API_SINCE(5) FUNC_API_REMOTE_IMPL;
void grid_clear(Integer grid)
  FUNC_API_SINCE(5) FUNC_API_REMOTE_IMPL;
void grid_cursor_goto(Integer grid, Integer row, Integer col)
  FUNC_API_SINCE(5) FUNC_API_REMOTE_IMPL;
void grid_line(Integer grid, Integer row, Integer col_start, Array data)
  FUNC_API_SINCE(5) FUNC_API_REMOTE_ONLY;
void grid_scroll(Integer grid, Integer top, Integer bot,
                 Integer left, Integer right, Integer rows, Integer cols)
  FUNC_API_SINCE(5) FUNC_API_REMOTE_IMPL;

void popupmenu_show(Array items, Integer selected, Integer row, Integer col)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void popupmenu_hide(void)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void popupmenu_select(Integer selected)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;

void tabline_update(Tabpage current, Array tabs)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;

void cmdline_show(Array content, Integer pos, String firstc, String prompt,
                  Integer indent, Integer level)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void cmdline_pos(Integer pos, Integer level)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void cmdline_special_char(String c, Boolean shift, Integer level)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void cmdline_hide(Integer level)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void cmdline_block_show(Array lines)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void cmdline_block_append(Array lines)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void cmdline_block_hide(void)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;

void wildmenu_show(Array items)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void wildmenu_select(Integer selected)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
void wildmenu_hide(void)
  FUNC_API_SINCE(3) FUNC_API_REMOTE_ONLY;
#endif  // NVIM_API_UI_EVENTS_IN_H
