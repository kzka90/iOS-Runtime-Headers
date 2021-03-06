/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFZeroCopyDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFDataHolder * _dataHolder;
    bool  _done;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;

@end
