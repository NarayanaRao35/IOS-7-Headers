/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MFMessageTextAttachment.h"

@interface MFMessageTextAttachment (DisplayableTest)
- (BOOL)isDisplayableInline;
- (BOOL)isDisplayableInsidePlugin;
- (BOOL)isContentDownloadable;
- (BOOL)isContentOpenable;
- (BOOL)_isSinglePagePDFThatIsAllowedToBeInline;
- (id)mimeType;
- (id)unzippedContentType;
- (id)contentType;
- (id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1;
@end
