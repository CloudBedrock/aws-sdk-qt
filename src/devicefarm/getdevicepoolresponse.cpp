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

#include "getdevicepoolresponse.h"
#include "getdevicepoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolResponse
 *
 * \brief The GetDevicePoolResponse class provides an interace for DeviceFarm GetDevicePool responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDevicePool
 */

/*!
 * @brief  Constructs a new GetDevicePoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDevicePoolResponse::GetDevicePoolResponse(
        const GetDevicePoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDevicePoolResponsePrivate(this), parent)
{
    setRequest(new GetDevicePoolRequest(request));
    setReply(reply);
}

const GetDevicePoolRequest * GetDevicePoolResponse::request() const
{
    Q_D(const GetDevicePoolResponse);
    return static_cast<const GetDevicePoolRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm GetDevicePool response.
 *
 * @param  response  Response to parse.
 */
void GetDevicePoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDevicePoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDevicePoolResponsePrivate
 *
 * \brief Private implementation for GetDevicePoolResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDevicePoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDevicePoolResponse instance.
 */
GetDevicePoolResponsePrivate::GetDevicePoolResponsePrivate(
    GetDevicePoolResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm GetDevicePoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDevicePoolResponsePrivate::parseGetDevicePoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePoolResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
