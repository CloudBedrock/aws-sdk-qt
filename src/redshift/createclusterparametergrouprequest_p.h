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

#ifndef QTAWS_CREATECLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_CREATECLUSTERPARAMETERGROUPREQUEST_P_H

#include "redshift_p.h"
#include "createclusterparametergrouprequest.h"

namespace AWS {

namespace Redshift {

class CreateClusterParameterGroupRequest;

class QTAWS_EXPORT CreateClusterParameterGroupRequestPrivate : public RedshiftPrivate {

public:
    CreateClusterParameterGroupRequestPrivate(const Redshift::Action action,
                                   CreateClusterParameterGroupRequest * const q);
    CreateClusterParameterGroupRequestPrivate(const CreateClusterParameterGroupRequestPrivate &other,
                                   CreateClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClusterParameterGroupRequest)

};

} // namespace Redshift
} // namespace AWS

#endif
