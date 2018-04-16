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

#include "updatedevicepoolresponse.h"
#include "updatedevicepoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateDevicePoolResponse
 *
 * \brief The UpdateDevicePoolResponse class encapsulates DeviceFarm UpdateDevicePool responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateDevicePool
 */

/*!
 * @brief  Constructs a new UpdateDevicePoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDevicePoolResponse::UpdateDevicePoolResponse(
        const UpdateDevicePoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateDevicePoolResponsePrivate(this), parent)
{
    setRequest(new UpdateDevicePoolRequest(request));
    setReply(reply);
}

const UpdateDevicePoolRequest * UpdateDevicePoolResponse::request() const
{
    Q_D(const UpdateDevicePoolResponse);
    return static_cast<const UpdateDevicePoolRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm UpdateDevicePool response.
 *
 * @param  response  Response to parse.
 */
void UpdateDevicePoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateDevicePoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateDevicePoolResponsePrivate
 *
 * \brief Private implementation for UpdateDevicePoolResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDevicePoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDevicePoolResponse instance.
 */
UpdateDevicePoolResponsePrivate::UpdateDevicePoolResponsePrivate(
    UpdateDevicePoolResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm UpdateDevicePoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDevicePoolResponsePrivate::parseUpdateDevicePoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDevicePoolResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
