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

#include "putimageresponse.h"
#include "putimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::PutImageResponse
 *
 * \brief The PutImageResponse class encapsulates ECR PutImage responses.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::putImage
 */

/*!
 * @brief  Constructs a new PutImageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutImageResponse::PutImageResponse(
        const PutImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new PutImageResponsePrivate(this), parent)
{
    setRequest(new PutImageRequest(request));
    setReply(reply);
}

const PutImageRequest * PutImageResponse::request() const
{
    Q_D(const PutImageResponse);
    return static_cast<const PutImageRequest *>(d->request);
}

/*!
 * @brief  Parse a ECR PutImage response.
 *
 * @param  response  Response to parse.
 */
void PutImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutImageResponsePrivate
 *
 * \brief Private implementation for PutImageResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutImageResponse instance.
 */
PutImageResponsePrivate::PutImageResponsePrivate(
    PutImageResponse * const q) : ECRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ECR PutImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutImageResponsePrivate::parsePutImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImageResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
