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

#include "modifyhapgresponse.h"
#include "modifyhapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ModifyHapgResponse
 *
 * \brief The ModifyHapgResponse class provides an interace for CloudHSM ModifyHapg responses.
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
 * \sa CloudHSMClient::modifyHapg
 */

/*!
 * @brief  Constructs a new ModifyHapgResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyHapgResponse::ModifyHapgResponse(
        const ModifyHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ModifyHapgResponsePrivate(this), parent)
{
    setRequest(new ModifyHapgRequest(request));
    setReply(reply);
}

const ModifyHapgRequest * ModifyHapgResponse::request() const
{
    Q_D(const ModifyHapgResponse);
    return static_cast<const ModifyHapgRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSM ModifyHapg response.
 *
 * @param  response  Response to parse.
 */
void ModifyHapgResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ModifyHapgResponsePrivate
 *
 * \brief Private implementation for ModifyHapgResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyHapgResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyHapgResponse instance.
 */
ModifyHapgResponsePrivate::ModifyHapgResponsePrivate(
    ModifyHapgResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSM ModifyHapgResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyHapgResponsePrivate::parseModifyHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyHapgResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
