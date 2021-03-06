/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSDictionary, NSMutableArray;

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    NSMutableArray *_batchPlaceResults;
    NSMutableArray *_clusters;
    } _has;
    int _statusCode;
}

@property(retain) NSMutableArray * batchPlaceResults;
@property(retain) NSMutableArray * clusters;
@property BOOL hasStatusCode;
@property(retain) NSDictionary * httpHeaders;
@property int statusCode;

- (void)addBatchPlaceResult:(id)arg1;
- (void)addCluster:(id)arg1;
- (id)batchPlaceResultAtIndex:(unsigned int)arg1;
- (id)batchPlaceResults;
- (unsigned int)batchPlaceResultsCount;
- (void)clearBatchPlaceResults;
- (void)clearClusters;
- (id)clusterAtIndex:(unsigned int)arg1;
- (id)clusters;
- (unsigned int)clustersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (id)httpHeaders;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBatchPlaceResults:(id)arg1;
- (void)setClusters:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setHttpHeaders:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
