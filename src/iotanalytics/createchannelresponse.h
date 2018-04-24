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

#ifndef QTAWS_CREATECHANNELRESPONSE_H
#define QTAWS_CREATECHANNELRESPONSE_H

#include "iotanalyticsresponse.h"
#include "createchannelrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateChannelResponsePrivate;

class QTAWS_EXPORT CreateChannelResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    CreateChannelResponse(const CreateChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChannelRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(CreateChannelResponse)
    Q_DISABLE_COPY(CreateChannelResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
