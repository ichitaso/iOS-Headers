/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQHXMLOutput-Protocol.h"

// Not exported
@interface GQHDOMXML : NSObject <GQHXMLOutput>
{
    struct _xmlDoc *mXMLDoc;
    struct _xmlNode *mCurrentNode;
}

- (struct __CFData *)createProgressiveHtml;
- (struct __CFData *)createHtmlWithCss:(struct __CFString *)arg1;
- (struct __CFData *)createHtml;
- (void)addCharRef:(const char *)arg1;
- (void)addXmlCharContent:(const char *)arg1;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)endElementWithExpectedName:(const char *)arg1;
- (void)endElement;
- (void)startElement:(const char *)arg1;
- (void)dealloc;
- (id)initWithHead;
- (id)initEmpty;

@end

