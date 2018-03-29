/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEDELIVERYSTREAMREQUEST_P_H
#define QTAWS_CREATEDELIVERYSTREAMREQUEST_P_H

#include "firehose_p.h"
#include "createdeliverystreamrequest.h"

namespace AWS {

namespace Firehose {

class CreateDeliveryStreamRequest;

class QTAWS_EXPORT CreateDeliveryStreamRequestPrivate : public FirehosePrivate {

public:
    CreateDeliveryStreamRequestPrivate(const Firehose::Action action,
                                   CreateDeliveryStreamRequest * const q);
    CreateDeliveryStreamRequestPrivate(const CreateDeliveryStreamRequestPrivate &other,
                                   CreateDeliveryStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace AWS

#endif
