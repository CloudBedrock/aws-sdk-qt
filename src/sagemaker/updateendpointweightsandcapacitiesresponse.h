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

#ifndef QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESRESPONSE_H
#define QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESRESPONSE_H

#include "sagemakerresponse.h"
#include "updateendpointweightsandcapacitiesrequest.h"

namespace AWS {

namespace sagemaker {

class UpdateEndpointWeightsAndCapacitiesResponsePrivate;

class QTAWS_EXPORT UpdateEndpointWeightsAndCapacitiesResponse : public UpdateEndpointWeightsAndCapacitiesResponse {
    Q_OBJECT

public:
    UpdateEndpointWeightsAndCapacitiesResponse(const UpdateEndpointWeightsAndCapacitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEndpointWeightsAndCapacitiesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateEndpointWeightsAndCapacitiesResponse)
    Q_DISABLE_COPY(UpdateEndpointWeightsAndCapacitiesResponse)

};

} // namespace sagemaker
} // namespace AWS

#endif
