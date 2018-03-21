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

#ifndef QTAWS_UPDATEBAIDUCHANNELRESPONSE_H
#define QTAWS_UPDATEBAIDUCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updatebaiduchannelrequest.h"

namespace AWS {

namespace Pinpoint {

class UpdateBaiduChannelResponsePrivate;

class QTAWS_EXPORT UpdateBaiduChannelResponse : public UpdateBaiduChannelResponse {
    Q_OBJECT

public:
    UpdateBaiduChannelResponse(const UpdateBaiduChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBaiduChannelRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateBaiduChannelResponse)
    Q_DISABLE_COPY(UpdateBaiduChannelResponse)

};

} // namespace Pinpoint
} // namespace AWS

#endif
