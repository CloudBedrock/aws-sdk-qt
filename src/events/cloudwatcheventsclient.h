/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_CLOUDWATCHEVENTSCLIENT_H
#define QTAWS_CLOUDWATCHEVENTSCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class CloudWatchEventsClientPrivate;

class QTAWS_EXPORT CloudWatchEventsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudWatchEventsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudWatchEventsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CloudWatchEventsDeleteRuleResponse * deleteRule(const CloudWatchEventsDeleteRuleRequest &request);
    CloudWatchEventsDescribeRuleResponse * describeRule(const CloudWatchEventsDescribeRuleRequest &request);
    CloudWatchEventsDisableRuleResponse * disableRule(const CloudWatchEventsDisableRuleRequest &request);
    CloudWatchEventsEnableRuleResponse * enableRule(const CloudWatchEventsEnableRuleRequest &request);
    CloudWatchEventsListRuleNamesByTargetResponse * listRuleNamesByTarget(const CloudWatchEventsListRuleNamesByTargetRequest &request);
    CloudWatchEventsListRulesResponse * listRules(const CloudWatchEventsListRulesRequest &request);
    CloudWatchEventsListTargetsByRuleResponse * listTargetsByRule(const CloudWatchEventsListTargetsByRuleRequest &request);
    CloudWatchEventsPutEventsResponse * putEvents(const CloudWatchEventsPutEventsRequest &request);
    CloudWatchEventsPutRuleResponse * putRule(const CloudWatchEventsPutRuleRequest &request);
    CloudWatchEventsPutTargetsResponse * putTargets(const CloudWatchEventsPutTargetsRequest &request);
    CloudWatchEventsRemoveTargetsResponse * removeTargets(const CloudWatchEventsRemoveTargetsRequest &request);
    CloudWatchEventsTestEventPatternResponse * testEventPattern(const CloudWatchEventsTestEventPatternRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudWatchEventsClient)
    Q_DISABLE_COPY(CloudWatchEventsClient)

};

QTAWS_END_NAMESPACE

#endif
