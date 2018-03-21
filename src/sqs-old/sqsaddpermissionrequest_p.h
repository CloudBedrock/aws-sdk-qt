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

#ifndef SQSADDPERMISSIONREQUEST_P_H
#define SQSADDPERMISSIONREQUEST_P_H

#include "sqsaddpermissionrequest.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

class SqsAddPermissionRequest;

class QTAWS_EXPORT SqsAddPermissionRequestPrivate : public SqsRequestPrivate {

public:
    SqsAddPermissionRequest::PermissionsMap permissions; ///< Permissions to add.

    SqsAddPermissionRequestPrivate(const SqsRequest::Action action,
                                   SqsAddPermissionRequest * const q);
    SqsAddPermissionRequestPrivate(const SqsAddPermissionRequestPrivate &other,
                                   SqsAddPermissionRequest * const q);

    virtual QUrlQuery urlQuery() const;

private:
    Q_DECLARE_PUBLIC(SqsAddPermissionRequest)

};

QTAWS_END_NAMESPACE

#endif
