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

#ifndef QTAWS_UPDATESUBNETGROUPREQUEST_P_H
#define QTAWS_UPDATESUBNETGROUPREQUEST_P_H

#include "daxrequest_p.h"
#include "updatesubnetgrouprequest.h"

namespace QtAws {
namespace DAX {

class UpdateSubnetGroupRequest;

class QTAWS_EXPORT UpdateSubnetGroupRequestPrivate : public DaxRequestPrivate {

public:
    UpdateSubnetGroupRequestPrivate(const DaxRequest::Action action,
                                   UpdateSubnetGroupRequest * const q);
    UpdateSubnetGroupRequestPrivate(const UpdateSubnetGroupRequestPrivate &other,
                                   UpdateSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSubnetGroupRequest)

};

} // namespace DAX
} // namespace QtAws

#endif
