//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMFICImageTableChunk : NSObject
{
    unsigned long long _index;
    void *_bytes;
    unsigned long long _length;
    long long _fileOffset;
}

@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) long long fileOffset; // @synthesize fileOffset=_fileOffset;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) void *bytes; // @synthesize bytes=_bytes;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 index:(unsigned long long)arg2 length:(unsigned long long)arg3;

@end

