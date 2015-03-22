#ifndef __DEBUG_GST_H__
#define __DEBUG_GST_H__

#include "blobwatch.h"

struct debug_gst;

void debug_gst_init(int argc, char *argv[]);
struct debug_gst *debug_gst_new(int width, int height, int framerate);
struct debug_gst *debug_gst_unref(struct debug_gst *gst);
void debug_gst_frame_push(struct debug_gst *gst, void *frame, size_t size,
			  size_t attach_offset, struct blobservation *ob,
			  double rot[9], double trans[3], double timestamps[3]);

#endif /* __DEBUG_GST_H__ */
