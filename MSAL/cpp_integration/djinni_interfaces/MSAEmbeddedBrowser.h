// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from browser.djinni

#import <Foundation/Foundation.h>
@class MSAEmbeddedBrowserEventSink;
@class MSAUri;


@protocol MSAEmbeddedBrowser

- (BOOL)runWebFlow:(nullable MSAUri *)startUri
            endUri:(nullable MSAUri *)endUri
           headers:(nonnull NSDictionary<NSString *, NSString *> *)headers
         eventSink:(nullable MSAEmbeddedBrowserEventSink *)eventSink;

@end
