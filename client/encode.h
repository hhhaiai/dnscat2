#ifndef __ENCODE_H__
#define __ENCODE_H__

typedef enum
{
  HEX,
  BASE32
} encode_types_t;

size_t   get_decoded_size(encode_types_t type, size_t encoded_bytes);
char    *encode(encode_types_t type, uint8_t *value, size_t  length);
uint8_t *decode(encode_types_t type, char    *text,  size_t *length);

size_t   hex_get_decoded_size(size_t encoded_bytes);
char    *hex_encode(uint8_t *value, size_t length);
uint8_t *hex_decode(char *text,     size_t *length);

size_t   base32_get_decoded_size(size_t encoded_bytes);
char    *base32_encode(uint8_t *data,    size_t length);
uint8_t *base32_decode(const char *text, size_t *length);

#endif
