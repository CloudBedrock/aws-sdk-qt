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

#ifndef QTAWS_CREATEINSTANCESFROMSNAPSHOTREQUEST_P_H
#define QTAWS_CREATEINSTANCESFROMSNAPSHOTREQUEST_P_H

#include "lightsail_p.h"
#include "createinstancesfromsnapshotrequest.h"

namespace AWS {

namespace Lightsail {

class CreateInstancesFromSnapshotRequest;

class QTAWS_EXPORT CreateInstancesFromSnapshotRequestPrivate : public LightsailPrivate {

public:
    CreateInstancesFromSnapshotRequestPrivate(const Lightsail::Action action,
                                   CreateInstancesFromSnapshotRequest * const q);
    CreateInstancesFromSnapshotRequestPrivate(const CreateInstancesFromSnapshotRequestPrivate &other,
                                   CreateInstancesFromSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstancesFromSnapshotRequest)

};

} // namespace Lightsail
} // namespace AWS

#endif
