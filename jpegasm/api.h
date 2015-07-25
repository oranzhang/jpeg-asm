#ifndef JPEG_API_API_H
#define JPEG_API_API_H

#ifdef __cplusplus
extern "C" {
#endif

void encode_jpeg(unsigned char* rgb_buffer, unsigned int rgb_width, unsigned int rgb_height, int quality, unsigned char** out_buffer, unsigned long* out_size);
void decode_jpeg(unsigned char* jpeg_buffer, unsigned long jpeg_size, unsigned char** out_buffer, unsigned int* out_width,  unsigned int* out_height);

#ifdef __cplusplus
}
#endif

#endif //JPEG_API_API_H