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

#ifndef QTAWS_LISTENDPOINTCONFIGSREQUEST_H
#define QTAWS_LISTENDPOINTCONFIGSREQUEST_H

#include "sagemakerrequest.h"

namespace AWS {

namespace SageMaker {

class ListEndpointConfigsRequestPrivate;

class QTAWS_EXPORT ListEndpointConfigsRequest : public SageMakerRequest {

public:
    ListEndpointConfigsRequest(const ListEndpointConfigsRequest &other);
    ListEndpointConfigsRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(ListEndpointConfigsRequest)

}

} // namespace SageMaker
} // namespace AWS

#endif
