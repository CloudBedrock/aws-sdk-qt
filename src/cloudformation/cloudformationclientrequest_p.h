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

#ifndef QTAWS_CLOUDFORMATIONCLIENTREQUEST_P_H
#define QTAWS_CLOUDFORMATIONCLIENTREQUEST_P_H

#include "cloudformation_p.h"
#include "cloudformationclientrequest.h"

namespace AWS {

namespace CloudFormation {

class CloudFormationClientRequest;

class QTAWS_EXPORT CloudFormationClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CloudFormationClientRequest::Action action; ///< CloudFormation action to be performed.
    QString apiVersion;        ///< CloudFormation API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudFormation request (query string) parameters. @todo?

    CloudFormationClientRequestPrivate(const CloudFormationClientRequest::Action action, CloudFormationClientRequest * const q);
    CloudFormationClientRequestPrivate(const CloudFormationClientRequestPrivate &other, CloudFormationClientRequest * const q);

    static QString toString(const CloudFormationClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudFormationClientRequest)

};

} // namespace CloudFormation
} // namespace AWS

#endif
