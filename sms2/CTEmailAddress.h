/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CTMessageAddress-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_address;
}

+ (id)emailAddress:(id)arg1;
- (id)initWithAddress:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodedString;
- (id)canonicalFormat;
@property(readonly) NSString *address; // @synthesize address=_address;

@end

