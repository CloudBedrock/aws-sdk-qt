/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDWATCHEVENTSREQUEST_H
#define QTAWS_CLOUDWATCHEVENTSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudWatchEvents {

class CloudWatchEventsRequestPrivate;

class QTAWS_EXPORT CloudWatchEventsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudWatchEvents.
    enum Action {
        DeleteRuleAction,
        DescribeEventBusAction,
        DescribeRuleAction,
        DisableRuleAction,
        EnableRuleAction,
        ListRuleNamesByTargetAction,
        ListRulesAction,
        ListTargetsByRuleAction,
        PutEventsAction,
        PutPermissionAction,
        PutRuleAction,
        PutTargetsAction,
        RemovePermissionAction,
        RemoveTargetsAction,
        TestEventPatternAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudWatchEventsRequest(const Action action);
    CloudWatchEventsRequest(const CloudWatchEventsRequest &other);
    CloudWatchEventsRequest &operator=(const CloudWatchEventsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudWatchEventsRequest &other) const;


protected:
    /// @cond internal
    CloudWatchEventsRequest(CloudWatchEventsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(CloudWatchEventsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
