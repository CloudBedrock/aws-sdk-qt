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

#ifndef QTAWS_ENABLEAWSSERVICEACCESSREQUEST_P_H
#define QTAWS_ENABLEAWSSERVICEACCESSREQUEST_P_H

#include "organizations_p.h"
#include "enableawsserviceaccessrequest.h"

namespace AWS {

namespace Organizations {

class EnableAWSServiceAccessRequest;

class QTAWS_EXPORT EnableAWSServiceAccessRequestPrivate : public OrganizationsPrivate {

public:
    EnableAWSServiceAccessRequestPrivate(const Organizations::Action action,
                                   EnableAWSServiceAccessRequest * const q);
    EnableAWSServiceAccessRequestPrivate(const EnableAWSServiceAccessRequestPrivate &other,
                                   EnableAWSServiceAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableAWSServiceAccessRequest)

};

} // namespace Organizations
} // namespace AWS

#endif
