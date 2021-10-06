#include "model.h"

#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

const unsigned char model_data[] DATA_ALIGN_ATTRIBUTE = {
	0x24, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x1c, 0x00, 0x04, 0x00, 
	0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00, 0x00, 0x00, 0x18, 0x00, 
	0x12, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x34, 0x06, 0x00, 0x00, 
	0xd8, 0x01, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 
	0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 
	0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x0b, 0x00, 0x00, 0x00, 
	0x74, 0x01, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x44, 0x01, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 
	0x6c, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 
	0x30, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xe6, 0xfe, 0xff, 0xff, 
	0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x31, 0x34, 
	0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x90, 0xfa, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xa0, 0xfa, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0xfa, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xc0, 0xfa, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x46, 0xff, 0xff, 0xff, 
	0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0xfe, 0xa5, 0xd5, 0x40, 
	0x67, 0x89, 0xc0, 0xbf, 0x6f, 0xdb, 0xb9, 0x40, 0xa8, 0x41, 0x8b, 0x3f, 
	0x06, 0x3e, 0x35, 0xc0, 0x5a, 0xa9, 0x99, 0xc0, 0x27, 0xc2, 0xfc, 0x3f, 
	0x64, 0x8c, 0x2e, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x76, 0xff, 0xff, 0xff, 
	0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x45, 0xc8, 0x81, 0x40, 
	0xa7, 0xbf, 0xa9, 0xc0, 0xdb, 0xf9, 0x55, 0x3f, 0x1c, 0x73, 0x80, 0x3e, 
	0x97, 0x60, 0x97, 0x40, 0x73, 0xe2, 0x99, 0x40, 0x80, 0xd0, 0xc4, 0xbf, 
	0x61, 0x1c, 0x7e, 0x3e, 0xc4, 0x4e, 0xbc, 0x3f, 0xc2, 0xaf, 0x24, 0x3f, 
	0x51, 0x6c, 0x80, 0x40, 0xdc, 0xed, 0x21, 0xc0, 0x68, 0xff, 0x0e, 0xc0, 
	0x4f, 0xb1, 0x54, 0x3f, 0xba, 0xae, 0x13, 0xbf, 0x4a, 0xf3, 0x7c, 0xbe, 
	0x00, 0x00, 0x00, 0x00, 0xc6, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x7c, 0xca, 0xfa, 0xbf, 0x1e, 0xe6, 0x2a, 0xbd, 
	0xad, 0x93, 0xc4, 0xbf, 0xe1, 0xf3, 0x09, 0xbe, 0x10, 0x8a, 0x8b, 0xbf, 
	0x48, 0x3e, 0x99, 0x3f, 0x45, 0x86, 0xe8, 0xbe, 0x93, 0x30, 0x92, 0xbd, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2f, 0xfe, 0xb7, 0xbf, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xfb, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xb0, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 
	0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 
	0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 
	0x10, 0x00, 0x14, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
	0xf4, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 
	0x68, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0xae, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xa2, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x50, 0xfc, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 
	0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 
	0x10, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x0a, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0xbc, 0xfc, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x00, 0x00, 0xf0, 0x02, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 
	0x14, 0x02, 0x00, 0x00, 0xd0, 0x01, 0x00, 0x00, 0x88, 0x01, 0x00, 0x00, 
	0x18, 0x01, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x48, 0xfd, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x01, 0x00, 0x00, 0x00, 0x34, 0xfd, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 
	0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x8c, 0xfd, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
	0x1c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 
	0x78, 0xfd, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 
	0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 
	0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 
	0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 
	0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0xfc, 0xfd, 0xff, 0xff, 0x44, 0x00, 0x00, 0x00, 
	0x07, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x08, 0x00, 0x00, 0x00, 0xe8, 0xfd, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 
	0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 
	0x65, 0x6e, 0x73, 0x65, 0x2f, 0x53, 0x69, 0x67, 0x6d, 0x6f, 0x69, 0x64, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x00, 0x00, 0x50, 0xfe, 0xff, 0xff, 0x5c, 0x00, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x08, 0x00, 0x00, 0x00, 0x3c, 0xfe, 0xff, 0xff, 0x30, 0x00, 0x00, 0x00, 
	0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 
	0x65, 0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 
	0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 
	0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x00, 0x00, 0x22, 0xff, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x98, 0xfe, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 
	0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 
	0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
	0x66, 0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xfe, 0xff, 0xff, 
	0x17, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 
	0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 
	0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0xa6, 0xff, 0xff, 0xff, 0x4c, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x1c, 0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 
	0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 
	0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 
	0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 
	0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 
	0x14, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 
	0x0e, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff, 
	0x32, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 
	0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 
	0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 
	0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65, 
	0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x18, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 
	0x14, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
	0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x0c, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 
	0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0e, 0x00, 0x00, 0x00, 
	0x0c, 0x00, 0x10, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 
	0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x00, 0x00
};
const int model_data_len = 1696;