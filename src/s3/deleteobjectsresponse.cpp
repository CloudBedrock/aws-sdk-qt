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

#include "deleteobjectsresponse.h"
#include "deleteobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectsResponse
 *
 * \brief The DeleteObjectsResponse class encapsulates S3 DeleteObjects responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::deleteObjects
 */

/*!
 * @brief  Constructs a new DeleteObjectsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteObjectsResponse::DeleteObjectsResponse(
        const DeleteObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteObjectsResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectsRequest(request));
    setReply(reply);
}

const DeleteObjectsRequest * DeleteObjectsResponse::request() const
{
    Q_D(const DeleteObjectsResponse);
    return static_cast<const DeleteObjectsRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 DeleteObjects response.
 *
 * @param  response  Response to parse.
 */
void DeleteObjectsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteObjectsResponsePrivate
 *
 * \brief Private implementation for DeleteObjectsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteObjectsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteObjectsResponse instance.
 */
DeleteObjectsResponsePrivate::DeleteObjectsResponsePrivate(
    DeleteObjectsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 DeleteObjectsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteObjectsResponsePrivate::parseDeleteObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
