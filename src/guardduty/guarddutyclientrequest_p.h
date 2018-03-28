/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_GUARDDUTYCLIENTREQUEST_P_H
#define QTAWS_GUARDDUTYCLIENTREQUEST_P_H

#include "guardduty_p.h"
#include "request.h"

namespace AWS {

namespace GuardDuty {

class GuardDutyClientRequest;

class QTAWS_EXPORT GuardDutyClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    GuardDutyClientRequest::Action action; ///< GuardDuty action to be performed.
    QString apiVersion;        ///< GuardDuty API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GuardDuty request (query string) parameters. @todo?

    GuardDutyClientRequestPrivate(const GuardDutyClientRequest::Action action, GuardDutyClientRequest * const q);
    GuardDutyClientRequestPrivate(const RequestPrivate &other, GuardDutyClientRequest * const q);

    static QString toString(const GuardDutyClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GuardDutyClientRequest)

};

} // namespace GuardDuty
} // namespace AWS

#endif
