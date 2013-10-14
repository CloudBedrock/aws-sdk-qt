/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsendpointtestdata.h"

#include "../../src/core/awsendpoint.h"

// grep -Ee '<(Name|ServiceName|Hostname)>' ../qrc/endpoints.xml | tr -d '\n' | sed -e 's/<Name>/\n/g' | sed -e 's|</Hostname>|\n|g' | sed -e 's|</Name>|\n|g' | sed -re 's|\s*<ServiceName>([^<]+)</ServiceName>\s*<Hostname>(.*)|ADD_SERVICE(MAP, "\1", "\2");|g'
QVariantMap AwsEndpointTestData::regionServiceHosts()
{
    #define ADD_SERVICE(region, service, host) region.insert(QLatin1String(service), QLatin1String(host))

    QVariantMap AP_Northeast_1;
    ADD_SERVICE(AP_Northeast_1, "cloudformation", "cloudformation.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "cloudfront", "cloudfront.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "monitoring", "monitoring.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "dynamodb", "dynamodb.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "ec2", "ec2.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "elasticmapreduce", "elasticmapreduce.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "elasticache", "elasticache.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "rds", "rds.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "route53", "route53.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "sdb", "sdb.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "sns", "sns.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "sqs", "sqs.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "s3", "s3-ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "autoscaling", "autoscaling.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "elasticbeanstalk", "elasticbeanstalk.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "iam", "iam.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "importexport", "importexport.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "sts", "sts.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "storagegateway", "storagegateway.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "elasticloadbalancing", "elasticloadbalancing.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "swf", "swf.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "glacier", "glacier.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "directconnect", "directconnect.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "redshift", "redshift.ap-northeast-1.amazonaws.com");
    ADD_SERVICE(AP_Northeast_1, "elastictranscoder", "elastictranscoder.ap-northeast-1.amazonaws.com");

    QVariantMap AP_Southeast_1;
    ADD_SERVICE(AP_Southeast_1, "cloudformation", "cloudformation.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "cloudfront", "cloudfront.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "cloudsearch", "cloudsearch.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "monitoring", "monitoring.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "dynamodb", "dynamodb.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "ec2", "ec2.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "elasticmapreduce", "elasticmapreduce.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "elasticache", "elasticache.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "rds", "rds.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "route53", "route53.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "sdb", "sdb.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "sns", "sns.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "sqs", "sqs.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "s3", "s3-ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "autoscaling", "autoscaling.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "elasticbeanstalk", "elasticbeanstalk.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "iam", "iam.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "importexport", "importexport.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "sts", "sts.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "storagegateway", "storagegateway.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "elasticloadbalancing", "elasticloadbalancing.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "swf", "swf.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "directconnect", "directconnect.ap-southeast-1.amazonaws.com");
    ADD_SERVICE(AP_Southeast_1, "elastictranscoder", "elastictranscoder.ap-southeast-1.amazonaws.com");

    QVariantMap AP_Southeast_2;
    ADD_SERVICE(AP_Southeast_2, "cloudformation", "cloudformation.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "cloudfront", "cloudfront.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "monitoring", "monitoring.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "dynamodb", "dynamodb.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "ec2", "ec2.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "elasticmapreduce", "elasticmapreduce.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "elasticache", "elasticache.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "rds", "rds.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "route53", "route53.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "sdb", "sdb.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "sns", "sns.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "sqs", "sqs.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "s3", "s3-ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "autoscaling", "autoscaling.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "elasticbeanstalk", "elasticbeanstalk.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "iam", "iam.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "importexport", "importexport.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "sts", "sts.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "storagegateway", "storagegateway.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "elasticloadbalancing", "elasticloadbalancing.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "swf", "swf.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "directconnect", "directconnect.ap-southeast-2.amazonaws.com");
    ADD_SERVICE(AP_Southeast_2, "elastictranscoder", "elastictranscoder.ap-southeast-2.amazonaws.com");

    QVariantMap EU_West_1;
    ADD_SERVICE(EU_West_1, "cloudformation", "cloudformation.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "cloudfront", "cloudfront.amazonaws.com");
    ADD_SERVICE(EU_West_1, "cloudsearch", "cloudsearch.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "monitoring", "monitoring.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "dynamodb", "dynamodb.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "ec2", "ec2.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "elasticmapreduce", "elasticmapreduce.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "elasticache", "elasticache.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "rds", "rds.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "route53", "route53.amazonaws.com");
    ADD_SERVICE(EU_West_1, "sdb", "sdb.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "sns", "sns.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "sqs", "sqs.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "s3", "s3-eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "autoscaling", "autoscaling.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "elasticbeanstalk", "elasticbeanstalk.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "iam", "iam.amazonaws.com");
    ADD_SERVICE(EU_West_1, "importexport", "importexport.amazonaws.com");
    ADD_SERVICE(EU_West_1, "sts", "sts.amazonaws.com");
    ADD_SERVICE(EU_West_1, "storagegateway", "storagegateway.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "elasticloadbalancing", "elasticloadbalancing.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "swf", "swf.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "glacier", "glacier.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "directconnect", "directconnect.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "redshift", "redshift.eu-west-1.amazonaws.com");
    ADD_SERVICE(EU_West_1, "elastictranscoder", "elastictranscoder.eu-west-1.amazonaws.com");

    QVariantMap SA_East_1;
    ADD_SERVICE(SA_East_1, "cloudformation", "cloudformation.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "cloudfront", "cloudfront.amazonaws.com");
    ADD_SERVICE(SA_East_1, "monitoring", "monitoring.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "dynamodb", "dynamodb.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "ec2", "ec2.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "elasticmapreduce", "elasticmapreduce.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "elasticache", "elasticache.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "rds", "rds.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "route53", "route53.amazonaws.com");
    ADD_SERVICE(SA_East_1, "sdb", "sdb.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "sns", "sns.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "sqs", "sqs.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "s3", "s3-sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "autoscaling", "autoscaling.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "elasticbeanstalk", "elasticbeanstalk.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "iam", "iam.amazonaws.com");
    ADD_SERVICE(SA_East_1, "importexport", "importexport.amazonaws.com");
    ADD_SERVICE(SA_East_1, "sts", "sts.amazonaws.com");
    ADD_SERVICE(SA_East_1, "storagegateway", "storagegateway.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "elasticloadbalancing", "elasticloadbalancing.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "swf", "swf.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "directconnect", "directconnect.sa-east-1.amazonaws.com");
    ADD_SERVICE(SA_East_1, "elastictranscoder", "elastictranscoder.sa-east-1.amazonaws.com");

    QVariantMap US_East_1;
    ADD_SERVICE(US_East_1, "cloudformation", "cloudformation.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "cloudfront", "cloudfront.amazonaws.com");
    ADD_SERVICE(US_East_1, "cloudsearch", "cloudsearch.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "monitoring", "monitoring.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "dynamodb", "dynamodb.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "ec2", "ec2.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "elasticmapreduce", "elasticmapreduce.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "elasticache", "elasticache.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "rds", "rds.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "route53", "route53.amazonaws.com");
    ADD_SERVICE(US_East_1, "email", "email.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "sdb", "sdb.amazonaws.com");
    ADD_SERVICE(US_East_1, "sns", "sns.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "sqs", "sqs.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "s3", "s3.amazonaws.com");
    ADD_SERVICE(US_East_1, "autoscaling", "autoscaling.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "elasticbeanstalk", "elasticbeanstalk.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "iam", "iam.amazonaws.com");
    ADD_SERVICE(US_East_1, "importexport", "importexport.amazonaws.com");
    ADD_SERVICE(US_East_1, "sts", "sts.amazonaws.com");
    ADD_SERVICE(US_East_1, "storagegateway", "storagegateway.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "support", "support.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "elasticloadbalancing", "elasticloadbalancing.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "swf", "swf.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "glacier", "glacier.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "directconnect", "directconnect.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "datapipeline", "datapipeline.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "redshift", "redshift.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "opsworks", "opsworks.us-east-1.amazonaws.com");
    ADD_SERVICE(US_East_1, "elastictranscoder", "elastictranscoder.us-east-1.amazonaws.com");

    QVariantMap US_Gov_West_1;
    ADD_SERVICE(US_Gov_West_1, "monitoring", "monitoring.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "dynamodb", "dynamodb.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "ec2", "ec2.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "elasticmapreduce", "elasticmapreduce.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "rds", "rds.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "sns", "sns.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "sqs", "sqs.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "s3", "s3-us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "autoscaling", "autoscaling.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "iam", "iam.us-gov.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "sts", "sts.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "elasticloadbalancing", "elasticloadbalancing.us-gov-west-1.amazonaws.com");
    ADD_SERVICE(US_Gov_West_1, "swf", "swf.us-gov-west-1.amazonaws.com");

    QVariantMap US_West_1;
    ADD_SERVICE(US_West_1, "cloudformation", "cloudformation.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "cloudfront", "cloudfront.amazonaws.com");
    ADD_SERVICE(US_West_1, "cloudsearch", "cloudsearch.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "monitoring", "monitoring.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "dynamodb", "dynamodb.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "ec2", "ec2.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "elasticmapreduce", "elasticmapreduce.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "elasticache", "elasticache.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "rds", "rds.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "route53", "route53.amazonaws.com");
    ADD_SERVICE(US_West_1, "sdb", "sdb.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "sns", "sns.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "sqs", "sqs.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "s3", "s3-us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "autoscaling", "autoscaling.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "elasticbeanstalk", "elasticbeanstalk.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "iam", "iam.amazonaws.com");
    ADD_SERVICE(US_West_1, "importexport", "importexport.amazonaws.com");
    ADD_SERVICE(US_West_1, "sts", "sts.amazonaws.com");
    ADD_SERVICE(US_West_1, "storagegateway", "storagegateway.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "elasticloadbalancing", "elasticloadbalancing.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "swf", "swf.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "glacier", "glacier.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "directconnect", "directconnect.us-west-1.amazonaws.com");
    ADD_SERVICE(US_West_1, "elastictranscoder", "elastictranscoder.us-west-1.amazonaws.com");

    QVariantMap US_West_2;
    ADD_SERVICE(US_West_2, "cloudformation", "cloudformation.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "cloudfront", "cloudfront.amazonaws.com");
    ADD_SERVICE(US_West_2, "cloudsearch", "cloudsearch.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "monitoring", "monitoring.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "dynamodb", "dynamodb.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "ec2", "ec2.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "elasticmapreduce", "elasticmapreduce.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "elasticache", "elasticache.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "rds", "rds.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "route53", "route53.amazonaws.com");
    ADD_SERVICE(US_West_2, "sdb", "sdb.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "sns", "sns.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "sqs", "sqs.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "s3", "s3-us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "autoscaling", "autoscaling.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "elasticbeanstalk", "elasticbeanstalk.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "iam", "iam.amazonaws.com");
    ADD_SERVICE(US_West_2, "importexport", "importexport.amazonaws.com");
    ADD_SERVICE(US_West_2, "sts", "sts.amazonaws.com");
    ADD_SERVICE(US_West_2, "storagegateway", "storagegateway.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "elasticloadbalancing", "elasticloadbalancing.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "swf", "swf.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "glacier", "glacier.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "directconnect", "directconnect.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "redshift", "redshift.us-west-2.amazonaws.com");
    ADD_SERVICE(US_West_2, "elastictranscoder", "elastictranscoder.us-west-2.amazonaws.com");

    #undef ADD_SERVICE

    QVariantMap map;
    #define ADD_REGION(regionName, regionMap) map.insert(QLatin1String(regionName), regionMap)
    ADD_REGION("ap-northeast-1", AP_Northeast_1);
    ADD_REGION("ap-southeast-1", AP_Southeast_1);
    ADD_REGION("ap-southeast-2", AP_Southeast_2);
    ADD_REGION("eu-west-1",      EU_West_1);
    ADD_REGION("sa-east-1",      SA_East_1);
    ADD_REGION("us-east-1",      US_East_1);
    ADD_REGION("us-gov-west-1",  US_Gov_West_1);
    ADD_REGION("us-west-1",      US_West_1);
    ADD_REGION("us-west-2",      US_West_2);
    #undef ADD_REGION
    return map;
}

/*
 * This function builds a map of regionName -> serivceName -> (int)transports
 * for every region and serice AWS supports!  Not only does this test the
 * AwsRegion class quite thoroughly, but also the underlying AwsEndpoint class
 * and embedded endpoint.xml data file.
 */
// cat ../qrc/endpoints.xml | tr -d '\n' | sed -e 's/<Services>/\n/g' | head -1 | sed -e 's/<Region>/\n/g' | sed -re 's|<ServiceName>([^<]+)</ServiceName>\s*<Http>([^<]+)</Http>\s*<Https>([^<]+)</Https>|[MAP, "\1", HTTP:\2\|HTTPS:\3]|g' | sed -re 's/Hostname|Endpoint/\n/g' | grep -E 'Name|\[' | sed -re 's/.*<Name>([^<]+)<\/Name>.*/\1/' | sed -e 's/^>\s*//' | sed -e 's/\s*<$//'
QVariantMap AwsEndpointTestData::supportedServicesMap()
{
    #define ADD_SERVICE(region, service, transports) region.insert(QLatin1String(service), static_cast<int>(transports))

    QVariantMap AP_Northeast_1;
    ADD_SERVICE(AP_Northeast_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "redshift", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap AP_Southeast_1;
    ADD_SERVICE(AP_Southeast_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap AP_Southeast_2;
    ADD_SERVICE(AP_Southeast_2, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap EU_West_1;
    ADD_SERVICE(EU_West_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "redshift", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap SA_East_1;
    ADD_SERVICE(SA_East_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap US_East_1;
    ADD_SERVICE(US_East_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "email", AwsEndpoint::HTTPS|AwsEndpoint::SMTP);
    ADD_SERVICE(US_East_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "support", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "datapipeline", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "redshift", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "opsworks", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap US_Gov_West_1;
    ADD_SERVICE(US_Gov_West_1, "monitoring", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "dynamodb", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "ec2", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "swf", AwsEndpoint::HTTPS);

    QVariantMap US_West_1;
    ADD_SERVICE(US_West_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap US_West_2;
    ADD_SERVICE(US_West_2, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "redshift", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elastictranscoder", AwsEndpoint::HTTPS);

    #undef ADD_SERVICE

    QVariantMap map;
    #define ADD_REGION(regionName, regionMap) map.insert(QLatin1String(regionName), regionMap)
    ADD_REGION("ap-northeast-1", AP_Northeast_1);
    ADD_REGION("ap-southeast-1", AP_Southeast_1);
    ADD_REGION("ap-southeast-2", AP_Southeast_2);
    ADD_REGION("eu-west-1",      EU_West_1);
    ADD_REGION("sa-east-1",      SA_East_1);
    ADD_REGION("us-east-1",      US_East_1);
    ADD_REGION("us-gov-west-1",  US_Gov_West_1);
    ADD_REGION("us-west-1",      US_West_1);
    ADD_REGION("us-west-2",      US_West_2);
    #undef ADD_REGION
    return map;
}
