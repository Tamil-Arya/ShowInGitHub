/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class DVTDocumentLocation, NSImage, NSString;

@interface IDEOpenQuicklyMatch : NSObject <NSCopying>
{
    NSString *_matchedCandidate;
    DVTDocumentLocation *_location;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)displayPathGivenMatchContext:(id)arg1;
- (unsigned long long)hash;
@property(readonly) NSImage *image;
- (id)initWithLocation:(id)arg1 matchedCandidate:(id)arg2;
- (id)initWithMatchedCandidate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOpenQuicklyMatch:(id)arg1;
- (id)locationGivenMatchContext:(id)arg1;
- (int)matchTypeGivenMatchContext:(id)arg1;
- (id)matchURLGivenMatchContext:(id)arg1;
@property(readonly) NSString *matchedCandidate; // @synthesize matchedCandidate=_matchedCandidate;
- (double)scoreGivenMatchContext:(id)arg1;
- (id)standardizedFileURLGivenMatchContext:(id)arg1;

@end

