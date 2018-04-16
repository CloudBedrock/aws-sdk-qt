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

#include "getuploadresponse.h"
#include "getuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetUploadResponse
 *
 * \brief The GetUploadResponse class provides an interace for DeviceFarm GetUpload responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getUpload
 */

/*!
 * @brief  Constructs a new GetUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUploadResponse::GetUploadResponse(
        const GetUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetUploadResponsePrivate(this), parent)
{
    setRequest(new GetUploadRequest(request));
    setReply(reply);
}

const GetUploadRequest * GetUploadResponse::request() const
{
    Q_D(const GetUploadResponse);
    return static_cast<const GetUploadRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm GetUpload response.
 *
 * @param  response  Response to parse.
 */
void GetUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetUploadResponsePrivate
 *
 * \brief Private implementation for GetUploadResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUploadResponse instance.
 */
GetUploadResponsePrivate::GetUploadResponsePrivate(
    GetUploadResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm GetUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUploadResponsePrivate::parseGetUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUploadResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
