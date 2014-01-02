/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct VMULabelUniquingDataForStringType {
    id _field1;
    id _field2;
};

struct _CSTypeRef {
    unsigned long long _opaque_1;
    unsigned long long _opaque_2;
};

struct _VMUBlockNode {
    unsigned long long _field1;
    unsigned int :3;
    unsigned int :36;
    unsigned int :25;
};

struct _VMUDirectedGraphEdge {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct _VMUDirectedGraphNode {
    unsigned int _field1;
    unsigned int _field2;
};

struct _VMUObjectGraphEdge {
    unsigned int :64;
    unsigned int :4;
    unsigned int :60;
};

struct _VMURange {
    unsigned long long location;
    unsigned long long length;
};

struct _VMURegionMap {
    void *_field1;
    struct _VMURegionNode *_field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned int _field6[0];
};

struct _VMURegionNode {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    void *_field5;
    unsigned long long _field6;
    struct _VMURegionNode *_field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
    struct *_field11;
    unsigned int _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    int _field15;
    int _field16;
    unsigned int _field17;
    unsigned char _field18;
    unsigned char _field19;
};

struct _VMUThreadNode {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long *_field4;
};

struct _VMUZoneNode {
    unsigned long long _field1;
    struct malloc_introspection_t *_field2;
    id _field3;
};

struct __CFRuntimeBase {
    unsigned long long _field1;
    unsigned char _field2[4];
    unsigned int _field3;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    void *_field9;
    void *_field10;
    void *_field11;
    void *_field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct dyld_image_info_64 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct malloc_introspection_t;

struct nlist_64 {
    union {
        unsigned int _field1;
    } _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned short _field4;
    unsigned long long _field5;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_7523a67d;

typedef struct {
    unsigned long long _field1;
    unsigned int :60;
    unsigned int :4;
    id _field2;
} CDStruct_599faf0f;

typedef struct {
    unsigned long long _field1;
    int _field2;
    unsigned long long _field3;
} CDStruct_df82e459;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int *_field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7[2];
    CDStruct_7523a67d _field8[0];
} CDStruct_32d0cbe3;

