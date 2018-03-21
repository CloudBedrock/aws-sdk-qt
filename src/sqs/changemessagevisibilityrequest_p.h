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

#ifndef QTAWS_CHANGEMESSAGEVISIBILITYREQUEST_P_H
#define QTAWS_CHANGEMESSAGEVISIBILITYREQUEST_P_H

#include "sqs_p.h"
#include "changemessagevisibilityrequest.h"

namespace AWS {

namespace SQS {

class ChangeMessageVisibilityRequest;

class QTAWS_EXPORT ChangeMessageVisibilityRequestPrivate : public SQSPrivate {

public:
    ChangeMessageVisibilityRequestPrivate(const SQS::Action action,
                                   ChangeMessageVisibilityRequest * const q);
    ChangeMessageVisibilityRequestPrivate(const ChangeMessageVisibilityRequestPrivate &other,
                                   ChangeMessageVisibilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangeMessageVisibilityRequest)

};

} // namespace SQS
} // namespace AWS

#endif
