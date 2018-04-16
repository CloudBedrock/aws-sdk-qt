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

#include "deletehsmresponse.h"
#include "deletehsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::DeleteHsmResponse
 *
 * \brief The DeleteHsmResponse class provides an interace for CloudHSM DeleteHsm responses.
 *
 * \ingroup CloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::deleteHsm
 */

/*!
 * @brief  Constructs a new DeleteHsmResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteHsmResponse::DeleteHsmResponse(
        const DeleteHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DeleteHsmResponsePrivate(this), parent)
{
    setRequest(new DeleteHsmRequest(request));
    setReply(reply);
}

const DeleteHsmRequest * DeleteHsmResponse::request() const
{
    Q_D(const DeleteHsmResponse);
    return static_cast<const DeleteHsmRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSM DeleteHsm response.
 *
 * @param  response  Response to parse.
 */
void DeleteHsmResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteHsmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteHsmResponsePrivate
 *
 * \brief Private implementation for DeleteHsmResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteHsmResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteHsmResponse instance.
 */
DeleteHsmResponsePrivate::DeleteHsmResponsePrivate(
    DeleteHsmResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSM DeleteHsmResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteHsmResponsePrivate::parseDeleteHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHsmResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
