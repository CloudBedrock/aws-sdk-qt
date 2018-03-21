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

#ifndef QTAWS_DELETETAPEREQUEST_P_H
#define QTAWS_DELETETAPEREQUEST_P_H

#include "storagegateway_p.h"
#include "deletetaperequest.h"

namespace AWS {

namespace StorageGateway {

class DeleteTapeRequest;

class QTAWS_EXPORT DeleteTapeRequestPrivate : public StorageGatewayPrivate {

public:
    DeleteTapeRequestPrivate(const StorageGateway::Action action,
                                   DeleteTapeRequest * const q);
    DeleteTapeRequestPrivate(const DeleteTapeRequestPrivate &other,
                                   DeleteTapeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTapeRequest)

};

} // namespace StorageGateway
} // namespace AWS

#endif
